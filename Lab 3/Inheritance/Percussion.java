public class Percussion extends Instrument {
    String material;
    String pitch;

    public Percussion(String material,String pitch){
        this.material = material;
        this.pitch = pitch;
    }

    @Override
    public void makeSound() {
        System.out.println("Ba dum tss");
        System.out.printf("Material of the percussion instrument: %s\n" +
                "Pitch percussion: %s\n" , material, pitch);
    }
}
