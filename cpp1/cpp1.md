## C++ 1. díl

C++ je objektové rozšíření jazyka C. Jeho syntaxe se vyvíjí, změny jsou většinou zpětně kompatibilní. Budeme používat standard z roku 2011 (existuje i 2017, ale dosud není kompilátory plně podporován).

### Standardní knihovna

C++ je dodáván se standardní knihovnou, z nichž nejpoužívanější je `iostream` pro práci s datovými toky (*streams*) a kontejnery: každý má svou vlastní knihovnu, dnes si ukážeme `vector`, který implementuje pole proměnné délky.

### Jmenné prostory

Všechny třídy a funkce standardní knihovny jsou ve **jmenném prostoru** std, pro využití vektoru je tedy třeba psát `std::vector`. Pro přehlednost importujeme prostor std do globálního jmenného prostoru příkazem `using namespace std`, pak je možné psát `vector` bez `std::`.

### Vector

`vector` je šablonová třída pro pole narůstající délky. Šablonová třída (*template class*) je třída s typovou proměnnou, která se zapisuje do špičatých závorek za typ - např. `vector<int>` je šablonová třída pole, jehož prvky jsou čísla. Všimněte si metody `push_back()`, která přidá prvek nakonec pole. Také obsahuje metodu `size()`, která vrací počat prvků.

Všimněte si v příkladu, že můžeme vracet pole vytvořené uvnitř funkce. V C bychom si to nemohli dovolit, jelikož bychom vraceli ukazatel na uvolněnou automatickou (zásobníkovou) paměť. C++ má řadu nástrojů, jak toto obejít, které si vysvětlíme později, prozatím berte jako fakt, že `vector` lze vracet z funkce hodnotou.

### alternativní syntaxe for

Všimněte si na řádku 23 pohodlné syntaxe konstrukce `for`, kterou lze použít pro všechny třídy implementující *iterátory* - ty většinou neimplementujeme sami, ale využíváme dodaných kontejnerů jako je `vector`, které je implementují. V jiných jazycích existuje podobné příkaz `foreach`. Jinak je s vektory možno pracovat jako s poli, mohli bychom tedy psát také `for(int i=0; i<numbers.size(); ++i) printf("%d\n", numbers[i])`.

### automatická dedukce parametru

Pokud je možné určit typ parametru z pravé strany přiřazení, je možné místo typu psát `auto` (jako automatická dedukce typu). Připomíná konstrukci `var` skriptovacích jazyků, stále ale platí, že nemůžeme měnit typ jednou deklarované proměnné.