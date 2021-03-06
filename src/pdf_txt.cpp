#include <iostream>

#include "poppler-document.h"
#include "poppler-page.h"
using namespace std;

int main()
{
    poppler::document *doc = poppler::document::load_from_file("./dmca.pdf");
    const int pagesNbr = doc->pages();
    cout << "page count: " << pagesNbr << endl;

    for (int i = 0; i < pagesNbr; ++i)
        cout << doc->create_page(i)->text().to_latin1().c_str() << endl;
}
