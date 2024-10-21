# C++ Programování - Výukové Lekce

Tento repozitář obsahuje výukové lekce pro programování v C++ zaměřené na konzolové aplikace. Každá lekce obsahuje příklady kódu a úkoly.

## Lekce 1: Úvod do programování, základní pojmy (proměnné, datové typy, operátory)
V této lekci se naučíte základní pojmy programování, jako jsou proměnné, datové typy a operátory. Naučíte se, jak deklarovat proměnné, přiřazovat jim hodnoty a používat různé operátory pro provádění výpočtů.

**Proměnná** je místo v paměti, kde můžete uložit hodnotu, která se může měnit během běhu programu.  
**Datové typy** určují, jaký druh hodnoty může proměnná obsahovat (např. celé číslo, desetinné číslo, znak).  
**Operátory** jsou symboly, které provádějí operace s hodnotami (např. sčítání, odčítání, násobení).

| Datový typ  | Velikost           | Popis                                                                    |
| ------------|:------------------:| -------------------------------------------------------------------------|
| boolean     | 1 byt              | Ukládá pravdivé nebo nepravdivé hodnoty.                                 |
| char        | 1 byt              | Ukládá jeden znak/písmeno/číslo nebo hodnoty ASCII.                      |
| int         | 2 nebo 4 byty      | Ukládá celá čísla bez desetinných míst.                                  |
| float       | 4 byty             | Ukládá zlomková čísla obsahující jedno nebo více desetinných míst. (6-7) |
| double      | 8 bytů             | Ukládá zlomková čísla obsahující jedno nebo více desetinných míst. (15)  |

## Lekce 2: Instalace a nastavení vývojového prostředí (IDE)
V této lekci se naučíte, jak nainstalovat a nastavit vývojové prostředí (IDE) pro programování v C++. Nainstalujete si jedno z doporučených IDE a napíšete svůj první program "Hello World".

**IDE (Integrated Development Environment)** je software, který poskytuje komplexní prostředí pro vývoj softwaru. Obsahuje editor kódu, kompilátor, debugger a další nástroje, které usnadňují vývoj aplikací.

## Lekce 3: První program v C++ (Hello World)
V této lekci napíšete a upravíte jednoduchý program v C++, který vypisuje "Hello, World!" a následně vaše jméno. Naučíte se základní strukturu programu v C++ a práci s řetězci.

**Řetězec (string)** je sekvence znaků, která se používá k reprezentaci textu. V C++ se řetězce obvykle používají pomocí třídy `std::string`.

## Lekce 4: Podmíněné příkazy (if, else)
V této lekci se naučíte používat podmíněné příkazy `if` a `else`. Naučíte se, jak provádět různé akce na základě podmínek a jak používat logické operátory.

**Podmíněné příkazy** umožňují programu rozhodovat, které části kódu se mají provést na základě splnění určitých podmínek.  
**Logické operátory** (např. `&&`, `||`, `!`) se používají k vytváření složených podmínek.

|Logické ustanovení    |               |
|--------------------- |:-------------:|
| menší než             | a < b         | 
| menší nebo rovno než  | a <= b        |  
| větší než             | a > b         | 
| větší nebo rovno než  | a >= b        | 
| rovno                 | a == b        | 
| není rovno            | a != b        | 

## Lekce 5: Podmíněné příkazy (switch)
V této lekci se naučíte používat podmíněný příkaz `switch`. Naučíte se, jak provádět různé akce na základě hodnoty proměnné a jak používat příkaz `break`.

**Příkaz `switch`** umožňuje programu provádět různé akce na základě hodnoty proměnné.  
**Příkaz `break`** ukončuje provádění bloku `switch` a přenáší řízení na následující příkaz za blokem `switch`.

## Lekce 6: Smyčka for
V této lekci se naučíte používat smyčku `for`. Naučíte se, jak opakovat blok kódu pevně stanovený počet opakování a jak používat smyčku `for` pro iteraci přes pole.

**Smyčka `for`** se používá k opakování bloku kódu pevně stanovený počet opakování.  
**Iterace** je proces opakování bloku kódu pro každý prvek v kolekci (např. pole).

## Lekce 7: Smyčka while
V této lekci se naučíte používat smyčku `while`. Naučíte se, jak opakovat blok kódu, dokud je podmínka pravdivá, a jak používat smyčku `while` pro různé úlohy.

**Smyčka `while`** se opakuje, dokud je podmínka pravdivá. Používá se, když nevíte předem, kolikrát se má smyčka opakovat.

## Lekce 8: Smyčka do-while
V této lekci se naučíte používat smyčku `do-while`. Naučíte se, jak opakovat blok kódu alespoň jednou a jak používat smyčku `do-while` pro různé úlohy.

**Smyčka `do-while`** se opakuje, dokud je podmínka pravdivá, ale na rozdíl od smyčky `while` se podmínka kontroluje až po provedení bloku kódu, takže se blok kódu provede alespoň jednou.

## Lekce 9: Příkaz goto
V této lekci se naučíte používat příkaz `goto`. Naučíte se, jak provádět skoky na různé části kódu a jak používat příkaz `goto` pro řízení toku programu.

**Příkaz `goto`** umožňuje provádět skoky na různé části kódu pomocí štítků. Používá se zřídka, protože může vést k nečitelnému a těžko udržovatelnému kódu.

## Lekce 10: Použití matematických funkcí (cmath)
V této lekci se naučíte používat matematické funkce z knihovny `cmath` v C++. Naučíte se, jak používat funkce pro výpočet druhé odmocniny, mocniny, absolutní hodnoty, sinusu, kosinu a tangens.

**Matematické funkce z knihovny `cmath`:**

| Funkce | Popis |
|--------|-------|
| `sqrt(x)` | Vypočítá druhou odmocninu z hodnoty `x`. |
| `pow(x, y)` | Vypočítá mocninu hodnoty `x` na `y`. |
| `fabs(x)` | Vypočítá absolutní hodnotu z hodnoty `x`. |
| `sin(x)` | Vypočítá sinus hodnoty `x` (v radiánech). |
| `cos(x)` | Vypočítá kosinus hodnoty `x` (v radiánech). |
| `tan(x)` | Vypočítá tangens hodnoty `x` (v radiánech). |

## Lekce 11: Součet cifer
V této lekci se naučíte využít cyklus `while` k výpočtu součtu cifer. Nejprve se seznámíte se základy cyklu `while`, který umožňuje opakovat blok kódu, dokud je splněna určitá podmínka. Poté si vytvoříte algoritmus, který bude postupně rozkládat číslo na jednotlivé cifry a tyto cifry sčítat, dokud nezískáte konečný součet.

## Lekce 12: Euklidův algoritmus
V této lekci se naučíte implementovat Euklidův algoritmus pro výpočet největšího společného dělitele (NSD) dvou čísel. Nejprve si vysvětlíme teorii Euklidova algoritmu a jeho historický význam. Poté přejdeme k praktické části, kde pomocí tohoto algoritmu vytvoříte funkci, která bude schopna rychle a efektivně určit NSD pro dvě zadaná čísla.

## Lekce 13: Leibnizova řada
V této lekci se naučíte používat Leibnizovu řadu pro aproximaci hodnoty π. Začneme vysvětlením principu Leibnizovy řady, která pomocí nekonečné posloupnosti čísel umožňuje přibližně vypočítat hodnotu π. Následně se zaměříme na implementaci tohoto výpočtu v kódu, přičemž si ukážeme, jak pomocí této řady postupně získávat stále přesnější hodnoty π.

## Lekce 14: Cyklus for
V této lekci se naučíte používat cyklus `for` pro iterace, což je základní konstrukce pro opakování bloků kódu. Nejprve si vysvětlíme syntax a základní použití cyklu `for` v různých kontextech, jako je iterace přes seznamy a řetězce. Poté se podíváme na praktické příklady, které vám ukážou, jak cyklus `for` efektivně využít v různých programátorských situacích.

## Lekce 15: Hra o hádání čísel ze součtu a ze součinu
V této lekci se naučíte vytvářet interaktivní hru na hádání čísel pomocí součtu a součinu. Začneme návrhem herního algoritmu, který bude využívat matematické operace pro určení součtu a součinu náhodně vybraných čísel. Následně tento algoritmus implementujeme v kódu a vytvoříme interaktivní hru, kterou si budete moci zahrát a testovat své logické myšlení.

## Lekce 16: Výpočet mocniny pomocí cyklu for
V této lekci se naučíte vypočítat mocninu čísla pomocí cyklu `for`. Nejprve si vysvětlíme algoritmus, který využívá opakované násobení pro výpočet mocniny. Poté tento algoritmus implementujeme v kódu pomocí cyklu `for`, který nám umožní opakovat násobení, dokud nedosáhneme požadované mocniny.

## Lekce 17: Výpočet stěnových úhlopříček kvádru pomocí volané funkce
V této lekci se naučíte vypočítat stěnové úhlopříčky kvádru pomocí volané funkce. Nejprve si vysvětlíme teorii týkající se geometrie kvádru a stěnových úhlopříček. Poté vytvoříme funkci, která bude přijímat rozměry kvádru jako parametry a bude vracet délku úhlopříčky. Následně tuto funkci zavoláme v hlavním programu a demonstrujeme její použití na konkrétních příkladech.

## Lekce 18: Výpočet na kolikátý pokus padla sestka ze tří kostek
V této lekci se naučíte simulovat házení třemi kostkami a sledovat, na kolikátý pokus padla alespoň jedna šestka. Začneme vytvořením algoritmu, který bude generovat náhodná čísla reprezentující hody kostkami. Poté vytvoříme funkci, která bude tyto hody opakovat, dokud nepadne alespoň jedna šestka. Na závěr zhodnotíme výsledky a pokusíme se analyzovat pravděpodobnost úspěchu.
