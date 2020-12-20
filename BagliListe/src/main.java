public class main {
    public static void main(String[] args) {
       LinkedList <String>linkedList= new LinkedList<>();
        linkedList.add("Ahmet");
        linkedList.add(1);
        linkedList.add("Cabbar");
        linkedList.add(311);
        System.out.println("Listenin Elemanları -->");
        linkedList.display();
        linkedList.delete(311);
        System.out.println(" Silindi ------------>");
        linkedList.display();

    }
}
