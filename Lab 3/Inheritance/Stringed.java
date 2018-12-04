public class Stringed extends Instrument {
    int numberOfStrings;
    double frequency[];

    public Stringed(int numberOfStrings,double frequency[]){
        this.numberOfStrings = numberOfStrings;
        this.frequency = frequency;
    }

    @Override
    public void makeSound() {
        System.out.println("Trun");
        System.out.printf("Number of strings: %d\n", numberOfStrings);
        System.out.print("Frequency of each guitar string: \n");

        for(int i = 0; i < frequency.length; i++){
            System.out.print(i + 1 + " string: " + frequency[i] + "\n");
        }
    }

    public void Sound(){
        System.out.println("Sounds are extracted from me!\n");
    }
}
