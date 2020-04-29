# ninePoint

**Routine Name:**           ninePoint

**Author:** Kaden Hart

**Language:** C++. Compiled under the instructions of CMakeLists.txt in folder src

**Description/Purpose:** This routine will set up a Nine point diagonal matrix containing the right hand side

**Input:** list of points, and a right hand side vector

**Output:** a nine diagonal matrix, does not contain zeros, instead columns would be the diagonals.

**Usage/Example:**  

      std::vector<double> points = {1,4,1,4,-20,4,1,4,1};
      std::vector<double> rhs = {1,2,3,4,5,6,8,9,10};
      std::cout<<"nine Diagonal Matrix for [1,2,3,4,5,6,7,8,9,10]\n";
      auto nine = ninePoint(points ,rhs);
      printMat(nine);

Output from the lines above:  

      nine Diagonal Matrix for [1,2,3,4,5,6,7,8,9,10]

      [ 1 4 1 4 -20 4 1 4 1 1 ]
      [ 1 4 1 4 -20 4 1 4 1 2 ]
      [ 1 4 1 4 -20 4 1 4 1 3 ]
      [ 1 4 1 4 -20 4 1 4 1 4 ]
      [ 1 4 1 4 -20 4 1 4 1 5 ]
      [ 1 4 1 4 -20 4 1 4 1 6 ]
      [ 1 4 1 4 -20 4 1 4 1 8 ]
      [ 1 4 1 4 -20 4 1 4 1 9 ]
      [ 1 4 1 4 -20 4 1 4 1 10 ]


**Implementation/Code:** The following is the code for ninePoint(const std::vector<double>& points, const std::vector<double>& rhs)

      std::vector<std::vector<double>> ninePoint(const std::vector<double>& points, const std::vector<double>& rhs){
          std::vector<std::vector<double>> mat;
          for (int i = 0; i < rhs.size(); ++i) {
              std::vector<double> temp;
              for (int j = 0; j < points.size(); ++j) {
                  temp.push_back(points[j]);
              }
              temp.push_back(rhs[i]);
              mat.push_back(temp);
          }
          return mat;
      }
