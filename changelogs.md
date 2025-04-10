## v0.7.2 2025.04.10
## Patch:
* Dodano spis treści do docs.md.

## v0.7.1 2025.04.10
## Patch:
* Małe optymalizacje w funkcjach `bubblesort` `wypisztablice` `wypelnijlosowotablice`.

## v0.7.0 2025.04.02
### Minor
* Jeżeli do `int easyrand` zostanie przywołany tylko argument a, to zostanie on zwrócony.
* Dodano funkcję `void wypelnijtablice`.
* Dodano funkcje `maks` i `minim`.
* Dodano funkcję `initrand`.

## v0.6.0 2025.03.22
### Minor
* Wszystkie funkcje znajdują się w namespace hg.
* Dodano skrypty .bat do testowania i budowania biblioteki w systemie Windows.

## v0.5.0 2025.03.18
### Minor
* Dodano funkcję `int easyrand`.

### Patch
* Zoptymalizowano funkcję `void bubblesort`.
* W funkcji `void wypelnijlosowotablice` dodano sprawdzanie, czy b jest mniejsze niż a. W takim przypadku a i b są zamieniane.
* W aplikacji testowej dodano wyrzucanie błędu, jeśli wynik z libhgschl nie jest zgodny z wynikiem z biblioteki standardowej.

## v0.4.0 2025.03.18
### Minor
* Dodano funkcję `bool parzysta`.
* Dodano funkcję `void intswap`.
* Dodano funkcję `void bubblesort`.

## v0.1.0 - v0.3.1 2025.03.18
Dodano funkcje `szybkiepotegowanie`, `wypisztablice`, `wypelnijlosowotablice`.