int main()
{
    //���� ����� �������� ����
    bool isTrue = true;
    bool isFalse = false;

    //���� ������ ������ � ������� ����

    int nC = 99;
        int nD = 99;
    float fltA = 36.7;
    float fltB = 56.2;

    //���������� ������
   
    bool Rez1 = ((fltA || fltB) != (!(nC < nD)));
    bool Rez2 = ((nC || nD) != (!(fltA < fltB)));

    // ���� ��������� �� ��������� R-������

    const int CONST_VALUE = 5 + 3;

    // ���� � ����������� ����� �� ��������� R-������
    int result = 2 * 3 + 4;

    int nB, nE; // ���� ������ � �� �
    nB = 27; //���������� ����� nB ��������� 27
    nE = 6; // ���������� ����� nE ��������� 6
    int nl; // ���� ����� �
    int* pnl; // ���� ������� �����
    pnl = &nl; // ���������� ������� ����� ������� ����� nC
    *pnl = -16; // �������� �������� ������������

    const int CONSTA = 85; 
    bool bRez = ((CONSTA ^ ~nB) + *pnl) < (1 * (nE << sizeof(short)));
}