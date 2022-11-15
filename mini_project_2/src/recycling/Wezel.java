package recycling;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.TreeMap;
import java.util.Scanner;

public class Wezel {
    @Deprecated
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Finalizowanie_obiektu");
        super.finalize();
    }

    protected  void dodajPolacaeni(Wezel w) {
        this.next = w;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        ArrayList<Wezel> list = new ArrayList<Wezel>();
        for(int i =0;i<=1000000;i++){
            //System.out.println(i);
            Wezel w1 = new Wezel();
            Wezel w2 = new Wezel();
            w1.dodajPolacaeni(w2);
            w2.dodajPolacaeni(w1);

            list.add(w1);
            list.add(w2);
        }

        HashMap<Wezel, Boolean> hash = new HashMap<Wezel, Boolean>();
        for(int i =0;i<=1000000;i++){
            //System.out.println(i);
            Wezel w1 = new Wezel();
            Wezel w2 = new Wezel();
            w1.dodajPolacaeni(w2);
            w2.dodajPolacaeni(w1);
            hash.put(w1, true);
        }



        TreeMap<Wezel, Boolean> tree = new TreeMap<Wezel, Boolean>();
        for(int i =0;i<=1000000;i++){
            //System.out.println(i);
            Wezel w1 = new Wezel();
            Wezel w2 = new Wezel();
            w1.dodajPolacaeni(w2);
            w2.dodajPolacaeni(w1);
            hash.put(w1, true);
        }


        System.out.println("end");
//        s.nextLine();
//        s.close();
    }

    Wezel next;
}
