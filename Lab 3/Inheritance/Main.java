//14 задание

public class Main{
    public static void main(String[] args) {
        Instrument[] orchestra = new Instrument[3];

        orchestra[0] = new Wind("metal");
        orchestra[0].Instrument("Flute");
        orchestra[0].makeSound();
        orchestra[0].Sound();

        orchestra[1] = new Percussion("tree", "indefinite");
        orchestra[1].Instrument("Drum");
        orchestra[1].makeSound();
        orchestra[1].Sound();

        orchestra[2] = new Stringed(6, new double[]{329.63, 246.94, 196.00, 146.83, 110.00, 82.41});
        orchestra[2].Instrument("Guitar");
        orchestra[2].makeSound();
        orchestra[2].Sound();

        System.out.println("Orchestra: ");
        for(int i = 0; i < orchestra.length; i++){
            System.out.print(i + 1 + ")" + orchestra[i].type + "\n");
        }
    }
}
