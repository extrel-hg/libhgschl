# libhgschl - v0.7.0

## Przedmowa

**libhgschl** to biblioteka typu **header-only** do C++, zawierająca różne funkcje często wykorzystywane w szkole.

Biblioteka jest tworzona z myślą o programach działających w konsoli, a niektóre funkcje mogą być przydatne też w innych aplikacjach.

Biblioteka jest wydawana pod licencją **GPLv3**. Skrót licencji znajduje się w additionalresources/licensesummary.md.

## Instalacja

**libhgschl** jest biblioteką typu **header-only**, więc instalacja w każdym środowisku powinna być możliwa i łatwa do stosowania.

Wystarczy, że do kodu załączysz plik nagłówkowy `#include "libhgschl.h"` i przekażesz kompilatorowi informacje, gdzie znaleźć pliki nagłówkowe.

W folderze libhgschl/tests znajduje się plik tests.cpp, który zawiera program testowy sprawdzający funkcjonalość całej biblioteki.

### CMake

Mój projekt używa systemu budowania programów **CMake**, gdzie za proces załączania biblioteki odpowiada poniższy fragment kodu:

```
1 add_executable(${PROJECT_NAME}
2     tests.cpp
3     ../libhgschl.h
4 )
5 
6 target_include_directories(${PROJECT_NAME}
7     PRIVATE ${CMAKE_SOURCE_DIR}/../
8 )
```
Linijka nr 3 załącza bibliotekę jako plik źródłowy, a linijka nr 7 przekazuje informacje o tym, gdzie znajdują się pliki nagłówkowe. Należy pamiętać, że moja biblioteka to plik nagłówkowy.

### Code::Blocks

Proces instalacji biblioteki do Code::Blocks dla projektów z tylko jednym plikiem **.cpp** (czytaj: prawie każdego programu pisanego podczas rozwiązywania zadań) wygląda następująco:

1. Pobierz bibliotekę.
2. Przenieś plik `libhgschl.h` do tego folderu, w którym znajduje się twój plik **.cpp**.
3. W pliku **.cpp**, na samej górze, dodaj linijkę `#include "libhgschl.h"`

### Zależności

**libhgschl** wymaga dostępu do biblioteki standardowej C++ (standard C11) \<iostream>

## Autor i cel biblioteki

Postanowiłem napisać tę bibliotekę, ponieważ w szkole często pisałem wiele razy te same funkcje podczas wykonywania zadań. 

Biblioteka zawiera jak najlepsze implementacje często używanych funkcji wraz z ich dokumentacją, ułatwiając pracę użytkownika.

**libhgschl** stworzył Hubert Gonera z LO3 we Wrocławiu.

## Sposób ustalania wersji biblioteki

Biblioteka używa "wersjowania semantycznego" w wersji 2.0.0. Kopia używanego przeze mnie systemu znajduje się w additionalresources/semver.md.
