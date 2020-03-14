# genTriDiagMat

**Routine Name:**           genTriDiagMat

**Author:** Kaden Hart

**Language:** C++. Compiled under the instructions of CMakeLists.txt in folder src

**Description/Purpose:** This routine will generate a tridiagonal matrix given a right hand side and the diagonal values.

**Input:** 3 doubles for the diagonals, a right hand side vector that is used for size.

**Output:** A tri-diagonal matrix matching the size of the right hand side

**Usage/Example:**  

      std::vector<double> rhs = {1,2,3,4,5,6};
      auto x = genTriDiagMat(-2,1,1, rhs);

Output from the lines above:  

      [ 1 -2 1 0 0 0 ]
      [ 0 1 -2 1 0 0 ]
      [ 0 0 1 -2 1 0 ]
      [ 0 0 0 1 -2 1 ]
      [ 0 0 0 0 1 -2 ]


**Implementation/Code:** The following is the code for genTriDiagMat(double a, double b, double c, const std::vector<double>& rhs)  

    std::vector<std::vector<double>> genTriDiagMat(double a, double b, double c, const std::vector<double>& rhs){
        int size = rhs.size();
        std::vector<std::vector<double>> triDiag;
        if (rhs.size()!=size){
            return triDiag;
        }
        for(int i = 0; i < size; ++i) {
            std::vector<double> row;
            for(int j = 0; j < size; ++j) {
                /*if(j == size){
                    row.push_back(rhs[i]);
                }*/
                if (j == i -1){
                    row.push_back(b);
                }else if (j == i){
                    row.push_back(a);
                }else if(j == i+1){
                    row.push_back(c);
                }else{
                    row.push_back(0);
                }
            }
            triDiag.push_back(row);
        }
        return triDiag;
    }

