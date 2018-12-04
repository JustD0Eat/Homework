public class Wind extends Instrument {
    String material;

    public Wind(String material){
        this.material = material;
    }

    @Override
    public void makeSound() {
        System.out.println("Doo - doo");
        System.out.printf("Material manufacturing wind instrument: %s\n", material);
    }
}
