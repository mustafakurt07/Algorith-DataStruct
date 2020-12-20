
public class LinkedList<T> {
    Node headNode;
    public LinkedList()
    {
        headNode=null;
    }
    public void  add(Object value)
    {
        Node newNode=new Node(value,null);
        if(headNode==null)//listedeki ilk eleman ise liste bos ise yeni eleman bas eleman olur
        {
            headNode=newNode;

        }
        else
        {
            newNode.next=headNode;//KENDİNDEN SONRAKiNİ GÖSTERİYOR
            headNode=newNode;//ARTIK BASLANGIC NOKTAMIZ YENi EKLENEN OLUYOR
        }
    }
    public void delete(Object value)
    {
        headNode=headNode.next;
    }
    public void display()
    {

        Node n=headNode;//baslangıctan basla sonrakine gostere gostere yaz
        while(n!=null)
        {

            System.out.println((T)n.Value);
            n=n.next;

        }
    }
}
