int main()
{
    //Опис змінніх логічного типу
    bool isTrue = true;
    bool isFalse = false;

    //Опис змінних цілого й дійсного типу

    int nC = 99;
        int nD = 99;
    float fltA = 36.7;
    float fltB = 56.2;

    //Обчислення виразу
   
    bool Rez1 = ((fltA || fltB) != (!(nC < nD)));
    bool Rez2 = ((nC || nD) != (!(fltA < fltB)));

    // Опис константи за допомогою R-виразу

    const int CONST_VALUE = 5 + 3;

    // Опис і ініціалізація змінної за допомогою R-виразу
    int result = 2 * 3 + 4;

    int nB, nE; // опис змінних В та Е
    nB = 27; //ініціалізуємо змінну nB значенням 27
    nE = 6; // ініціалізуємо змінну nE значенням 6
    int nl; // опис змінної С
    int* pnl; // опис вказівної змінної
    pnl = &nl; // ініціалізуємо вказівну змінну адресою змінної nC
    *pnl = -16; // виконаємо операцію розіменування

    const int CONSTA = 85; 
    bool bRez = ((CONSTA ^ ~nB) + *pnl) < (1 * (nE << sizeof(short)));
}