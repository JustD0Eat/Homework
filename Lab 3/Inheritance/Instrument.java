public abstract class Instrument {
    String type;

    public void Instrument(String type){
        this.type = type;
        System.out.println("Type of musical instrument: " + type);
    }

    public void Sound(){
        System.out.println("Sounds are extracted from me!\n");
        }

    public abstract void makeSound();
}


