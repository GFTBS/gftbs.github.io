# pentaDiag

**Routine Name:**           pentaDiag

**Author:** Kaden Hart

**Language:** C++. Compiled under the instructions of CMakeLists.txt in folder src

**Description/Purpose:** This routine will set up a pentaDiagonal matrix containing the right hand side

**Input:** a,b,c,d,e, and a right hand side vector

**Output:** a pentadiagonal matrix, does not contain zeros, instead columns would be the diagonals.

**Usage/Example:**  

      std::vector<double> rhs = {1,2,3,4,5,6};
      std::cout<<"pentaDiagonal Matrix for [1,2,3,4,5,6]\n";
      auto penta = pentaDiag(1,1,-4,1,1,rhs);
      printMat(penta);

Output from the lines above:  

      pentaDiagonal Matrix for [1,2,3,4,5,6]

      [ 1 1 -4 1 1 1 ]
      [ 1 1 -4 1 1 2 ]
      [ 1 1 -4 1 1 3 ]
      [ 1 1 -4 1 1 4 ]
      [ 1 1 -4 1 1 5 ]
      [ 1 1 -4 1 1 6 ]


**Implementation/Code:** The following is the code for pentaDiag(double a, double b, double c, double d, double e, const std::vector<double>& rhs) 

      std::vector<std::vector<double>> pentaDiag(double a, double b, double c, double d, double e, const std::vector<double>& rhs){
          std::vector<std::vector<double>> mat;
          for (int i = 0; i < rhs.size(); ++i) {
              std::vector<double> temp;
              temp.push_back(a);
              temp.push_back(b);
              temp.push_back(c);
              temp.push_back(d);
              temp.push_back(e);
              temp.push_back(rhs[i]);
              mat.push_back(temp);
          }
          return mat;
      }
