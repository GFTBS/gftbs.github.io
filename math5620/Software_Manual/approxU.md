# approxU

**Routine Name:**           approxU

**Author:** Kaden Hart

**Language:** C++. Compiled under the instructions of CMakeLists.txt in folder src

**Description/Purpose:** This routine will approximate U for the equation AU = X

**Input:** A tridiagonal matrix, Vector X

**Output:** Approximate U

**Usage/Example:**  

      std::vector<double> rhs = {1,2,3,4,5,6,20};
      auto x = genTriDiagMat(-2,1,1, rhs);
      auto y = genTriDiagMat(-2,1,1, rhs);
      std::cout << "Tri diagonal Matrix -2, 1, 1 size = size of rhs \n";
      printMat(x);
      std::cout <<"rhs: ";
      printVec(rhs);

      std::cout << "U approx: ";
      auto z = approxU(x,rhs);
      printVec(z);
      printVec(matTimesVector(y,z));

Output from the lines above:  

Tri diagonal Matrix -2, 1, 1 size = size of rhs

      [ -2 1 0 0 0 0 0 ]
      [ 1 -2 1 0 0 0 0 ]
      [ 0 1 -2 1 0 0 0 ]
      [ 0 0 1 -2 1 0 0 ]
      [ 0 0 0 1 -2 1 0 ]
      [ 0 0 0 0 1 -2 1 ]
      [ 0 0 0 0 0 1 -2 ]
      rhs:
      [ 1 2 3 4 5 6 20 ]
      U approx:
      [ -12.125 -23.25 -32.375 -38.5 -40.625 -37.75 -28.875 ]

      [ 1 2 3 4 5 6 20 ]


**Implementation/Code:** The following is the code for approxU(std::vector<std::vector<double>> mat, std::vector<double> rhs)  

      std::vector<double> approxU(std::vector<std::vector<double>> mat, std::vector<double> rhs){
          std::vector<double> U;
          for(unsigned int i =1; i < rhs.size();++i){
              double temp =mat[i][i-1]/mat[i-1][i-1];
              mat[i][i] -= temp*mat[i-1][i];
              rhs[i] -= temp*rhs[i-1];
              mat[i][i-1] =0;
          }
          for(unsigned int i =0; i < rhs.size();++i){
              U.push_back(rhs[i]/mat[i][i]);
          }
          for(int i =int(rhs.size()-1); i >= 0;--i){
              U[i]=(rhs[i] - mat[i][i+1]*U[i+1])/mat[i][i];
          }

          return U;
      }
