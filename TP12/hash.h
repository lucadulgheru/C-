#include <string.h>
#include "Linked_list.h"
#include <iostream>

using namespace std;

//structure pour chaque element - contient cle et valeur
template<typename Tkey, typename Tvalue> struct elem_info {
    Tkey key;
    Tvalue value; };

//implementation du Hashtable a l'aide du LinkedList
template<typename Tkey, typename Tvalue> class Hashtable {
    private:
    //on a une liste pour chaque cle! (un tableau de listes)
        LinkedList<struct elem_info<Tkey, Tvalue> > *H;
        int HMAX;
        //pointeur vers une fonction de hachage, d'un certain type
        int (*hash)(Tkey);

        public:
            Hashtable(int hmax, int (*h) (Tkey)) {
	                HMAX = hmax;
	                hash = h;
	                H = new LinkedList<struct elem_info<Tkey,Tvalue> > [HMAX];
				}

			//ajouter la paire (cle, valeur)
			void put(Tkey key, Tvalue value)
			{
            	struct list_elem<struct elem_info<Tkey, Tvalue> > *p;
            	struct elem_info<Tkey, Tvalue> info;

            	//transformation avec la fonction de hachage hash
            	int hkey = hash(key);
				//premier element de la liste H[hkey]
            	p = H[hkey].pfirst;

            	while (p != NULL)
                {
					//si on trouve un element avec cette cle, on va le remplacer 
	                if (p->info.key == key)
	                    break;
                    p = p->next;
                }

                if (p != NULL) //element qui a deja une cle
                    p->info.value = value;
                else //element qui n'a pas de cle
                {
                    info.key = key;
                    info.value = value;
                    H[hkey].addLast(info);
                }
            }

	            //retourne valeur pour une certaine cle
            Tvalue get(Tkey key)
                {
                     struct list_elem<struct elem_info<Tkey, Tvalue> > *p;

                        int hkey = hash(key);
                         p = H[hkey].pfirst;

                         while (p != NULL)
                        {
                            if (p->info.key == key) break;
                            p = p->next;
                        }

                        if (p != NULL)
                            return p->info.value;
                        else
                        {
                            fprintf(stderr, "Error 101 - The key does not exist in the hashtable\n");
                            Tvalue x;
                            return x;
                        }
                }

            //verifie si un element avec une certaine cle existe
            int hasKey(Tkey key)
            {
                struct list_elem<struct elem_info<Tkey, Tvalue> > *p;

                int hkey = hash(key);
                p = H[hkey].pfirst;

                while (p != NULL)
                {
                    if (p->info.key == key)
                        break;
                    p = p->next;
                }

                if (p != NULL)
                    return 1;
                else
                    return 0;
            }
};
