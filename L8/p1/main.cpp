#include "persoana.h"
#include "student.h"
#include "StudentMaster.h"

int main()
{

    //PersoanaAC p1("1234567823", "Ana", "Iasi");
    //afisareProfil(p1);
    
    /*StudentAC s2;
    afisareProfil(s2);
    StudentAC s1("1234567890122", "Ion", "Vaslui", 2, 10);
    StudentAC s3("1234567890122", "Vasile", "Ialomita", 2, 7);
    s1.schimbareAdresa("Bucuresti");
    s1.inscriereAnStudiu(3);
    afisareProfil(s1);
    afisareProfil(s3);
      
    StudentAC *s4 = (s3.comparare_nota(s1));
    afisareProfil(*s4);
    s4=(s1.comparare_nota(s3));
    afisareProfil(*s4);
    */

    StudentMaster s("1234567890122", "Ion", "Vaslui", 2, 10,"AI BASE");

    StudentMaster v[]={
        StudentMaster("1234567890122", "Ion", "Vaslui", 2, 3,"AI BASE"),
        StudentMaster("1234567890122", "Cristi", "Vaslui", 2, 5,"AI BASE"),
        StudentMaster("1234567890122", "Stefan", "Vaslui", 2, 3,"AI BASE"),
        StudentMaster("1234567890122", "Beni", "Vaslui", 2, 10,"AI BASE"),
        StudentMaster("1234567890122", "Ana", "Vaslui", 2, 9,"AI BASE")
    };

    StudentAC* sm;//=v[0].comparare_nota(v[1]);
    for(int i=1;i<4;i++)
    {
        //sm=(StudentMaster *)sm->comparare_nota(v[i]);
        sm=sm->comparare_nota(v[i]);
    }

    //afisareProfil(static_cast<StudentMaster &>(sm));
    afisareProfil(*sm);
    cout<<endl;

    StudentMaster *ST;
    ST=static_cast<StudentMaster *>(sm);
    afisareProfil(*ST);

    return 0;
}