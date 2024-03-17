## [01](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/01.cpp) Broj cifara
Napišite program koji za uneseni cijeli broj ispisuje njegov broj cifara. <br/>
Input: broj [int] <br/>
Output: Broj cifara u unesenom broju

## [02](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/02.cpp) Fibonacci
Ispisati prvih n brojeva Fibonaccijevog niza koristeći for petlju. <br/>
Input: n [int] <br/>
Output: 0 1 1 2 3 5 ...

## [03](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/03.cpp) Faktorijel
Napisati program koji računa faktorijel za uneseni broj n.
 
## [04](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/04.cpp) Stepeni broja
Unesite broj n. Ispisati sve stepene broja 2 do 2^n koristeći do-while petlju. <br/>
Input: n [int] <br/>
Output: 2^0 2^1 2^2 ... 2^n

## [05](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/05.cpp) Brojevi djeljivi sa 5
Unesite broj n. Ispisati sve brojeve koji su djeljivi sa 4 od 1 do n koristeći for petlju. <br/>
Input: n [int] <br/>
Output: 4 8 12 ... (sve brojevi djeljivi sa 4 do n)

## [06](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/06.cpp) Brojevi djeljivi sa 3 i 5
Ispisati brojeve od 1 do 100 koji su djeljivi sa 3 i sa 5 koristeći for petlju. <br/>
Input: Nema <br/>
Output: 15 30 45 60 ...

## [07](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/07.cpp) NZD
Napišite program u kojem ćete omogućiti unos dva prirodna broja te izračunati i ispisati njihov najveći zajednički djeljitelj (npr. uneseni su 12 i 16 ispis treba biti 4).

## [08](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/08.cpp) Pretvaranje decimalnog broja u binarni
Napisati program koji će uneseni decimalni broj pretvoriti i ispisati njegov binarni ekvivalent.

## [09](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/09.cpp) Pravougaonik i kvadrat
Napisati program koji upotrebom for petlji ispisuje geometrijski lik kvadrat/pravougaonik uz pomoć nekog znaka. Korisnik bira znak, širinu i visinu, ako se odluči za kvadrat širina će biti jednaka visini).

## [10](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/10.cpp) Zamjena jedne znamenke
Omogućiti korisniku unos jednog prirodnog broja, te napisati program koji će svaku znamenku koja je djeljiva sa 3 zamijeniti sa drugim brojem koji je korisnik izabrao.

## [11](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/11.cpp) Suma dobijenih faktorijela
Napisti program koji će omogućiti korisniku unos nekog broja n, te ispisati sumu faktorijela svih cifara tog broja.

## [12](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/12.cpp) Zamjena cifre sa 2
Napišite program u kojem ćete omoguciti unos četverocifrenog broja i svaku znamenku koja je djeljiva sa 2 zamijeniti sa znamenkom po izboru.

## [13](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/13.cpp) Suma prostih cifara broja
Napisati funkciju 'sumOfPrimeDigits' za izračun sume cifara datog broja 'x', ali samo onih cifara koje su prosti brojevi. <br/>
Input: x [int] <br/>
Output: suma cifara broja koje postuju zadati uslov.

## [14](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/14.cpp) Dani sati minute
Napisati program u kojem ćete unijeti jedan prirodan broj  koji predstavlja vrijeme u minutama, a izračunati i ispisati koliko je to vremena u danima, satima i minutama. <br/>
Upotrijebite funkcije: <br/>
int sati (int &); <br/>
int dani (int &); <br/>
Npr ako korisnik unese 1520min program treba ispisati da je to 1 dan 1 sat i 20 min.

## [15](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/14.cpp) Suma cifara sa ispisom bez parnih brojeva
Date su dvije funkcije. Funkcija h provjerava da li broj x sadrži makar jednu parnu cifru, a funkcija x računa sumu cifara broja x. <br/>
Potrebno je uraditi implementaciju datih funkcija, a zatim napisati program gdje je potrebno unijeti varijable: <br/>

| Funkcija | Ulaz | Izlaz |  Definicija |
| --- | --- | --- | ---|
| n | int | bool | cjelobrojna vrijednost za koju važi ograničenje (n>0) | 
| x | int | int | cjelobrojna vrijednost za koju važi ograničenje (x>0) |

Ispisati sve brojeve u rasponu vrijednosti [1,n] za koje važi:

	Suma cifara je veća ili jednaka od vrijednosti x
	Ne sadrže niti jednu parnu cifru


## [16](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/16.cpp) Najveći binarni broj
Date su sljedeće funkcije: 

| Funkcija | Ulaz | Izlaz |  Definicija |
| --- | --- | --- | ---|
| isValid | int | bool | Provjerava da li je vrijednost x binarni broj (sačinjen samo od nula i jedinica). | 
| binaryToDecimal | int | int | Pretvara binarni broj x u decimalni broj. |

Napisati programski kod za unošenje cjelobrojnih vrijednosti gdje je n  cjelobrojna vrijednost za koju važi n>1.
Zatim je potrebno uraditi unos cjelobrojne vrijednosti b (koja mora biti binarni broj) ukupno n  puta. Ispisati najveću binarnu vrijednost od svih unosa i njegovu decimalnu reprezentaciju. </br>
Prilikom unošenja binarnog broja b, ponavljati unos dokle god unesena vrijednost nije validna.

## [17](https://github.com/azracaus/Programiranje1/blob/main/Vjezba1/17.cpp) Bankovni račun
Date su sljedeće funkcije: 

| Funkcija | Ulaz | Izlaz |  Definicija |
| --- | --- | --- | ---|
| deposit | balance:float, amount float | void | Omogućuje uplaćivanje vrijednosti amount bankovni račun i uvećavanje vrijednosti balance.  | 
| binaryToDecimal | balance:float, amount float | void | Omogućuje isplaćivanje vrijednosti amount sa bankovnog računa i umanjenje vrijednosti balance. |
| checkBalance | balance: float | void | Ispisuje trenutno stanje na bankovnom računu. |

Implementirati date funkcije, a zatim napisati program i uraditi sljedeće: </br>
Inicijalizirati stanje na računu na vrijednost od 0 KM</br>
Omogućiti korisnički unos varijable choice koja označava odabir funkcionalnosti (1 – Uplata, 2 – Isplata, 3 – Provjera stanja, 4 – Izlaz iz programa). </br>
U slučaju da je unesena opcija koja nije validna, ispisati poruku i ponavljati korisnički unos. Potrebno je napomenuti da se program izvršava sve dok korisnik ne odabere opciju 4.
