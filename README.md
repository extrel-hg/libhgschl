# libhgschl - v0.3.0

## Przedmowa

Biblioteka typu **header-only** do C++, zawierająca różnorakie funkcje do pracy szkolnej.

Biblioteka jest tworzona z myślą o programach działających w konsoli, lecz niektóre funkcje mogą być przydatne w innych aplikacjach.

Biblioteka jest wydawana pod licencją **GPLv3**.

## Instalacja

Biblioteka jest typu **header-only**, więc instalacja w każdym środowisku powinna być możliwa i łatwa.

Wystarczy, że do kodu załaczysz plik nagłówkowy, np. `#include "libhgschl.h"` i powiesz kompilatorowi, gdzie znaleść pliki nagłówkowe.

W folderze libhgschl/tests za ostatnią czynność odpowiada plik CMakeLists.txt, a konkretniej linijki:

```
add_executable(${PROJECT_NAME}
    tests.cpp
    ../libhgschl.h
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ${CMAKE_SOURCE_DIR}/../
)
```

### Zależności

**libhgschl** wymaga dostępu do biblioteki standardowej C++ (standard C11), a konkretniej biblioteki \<iostream>;

## Autor i cel biblioteki

Hubert Gonera 3A

## Sposób ustalania wersji biblioteki

Biblioteka używa "wersjowania semantycznego" w wersji 2.0.0. Kopia używanego przeze mnie systemu znajduje się w additionalresources/semver.md.