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

