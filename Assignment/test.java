import java.util.ArrayList;
import java.util.List;

public class test {
    public static List<String> provideSignals(String path) {
        List<String> signals = new ArrayList<>();
        int currentPosition = path.indexOf('S');
        int destinationPosition = path.indexOf('D');

        while (currentPosition != destinationPosition) {
            if (path.charAt(currentPosition + 1) == '_') {
                signals.add((currentPosition + 1) + "-" + (currentPosition + 2) + " W");
                currentPosition++;
            } else if (path.charAt(currentPosition + 1) == '*') {
                int jumpEnd = currentPosition + 1;
                while (jumpEnd < path.length() && path.charAt(jumpEnd) == '*') {
                    jumpEnd++;
                }
                signals.add((currentPosition + 1) + "-" + jumpEnd + " J");
                currentPosition = jumpEnd - 1;
            }
        }

        return signals;
    }

    public static void main(String[] args) {
        String path = "S _ **___*_* * D";
        List<String> signals = provideSignals(path);
        for (String signal : signals) {
            System.out.println(signal);
        }
    }
}
