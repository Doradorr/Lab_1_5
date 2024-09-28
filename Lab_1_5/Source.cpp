int main()
{
    //Description of variables of logical type
    bool isTrue = true;
    bool isFalse = false;
    //Description of variables of integer and real type
    
    int nC = 99;
        int nD = 99;
    float fltA = 36.7;
    float fltB = 56.2;
    
    //Evaluating an expression
   
    bool Rez1 = ((fltA || fltB) != (!(nC < nD)));
    bool Rez2 = ((nC || nD) != (!(fltA < fltB)));
    
  // Defining a constant using an R-expression
    
    const int CONST_VALUE = 5 + 3;

 // Declaring and initializing a variable using an R-expression
    
    int result = 2 * 3 + 4;

    int nB, nE; // description of variables B and E 
    nB = 27; // description of variables B and E 
    nE = 6; // description of variables B and E 
    int nl; // description of variable l 
    int* pnl; // description of the pointer variable
    pnl = &nl; // initialize the pointer variable with the address of the variable nl
    *pnl = -16; // initialize the pointer variable with the address of the variable nC

    const int CONSTA = 85; 
    bool bRez = ((CONSTA ^ ~nB) + *pnl) < (1 * (nE << sizeof(short)));
}
