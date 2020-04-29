# diffCoef

**Routine Name:**           diffCoef

**Author:** Kaden Hart

**Language:** C++. Compiled under the instructions of CMakeLists.txt in folder src

**Description/Purpose:** This routine will approximate the coefficients for a differential equation with the given points

**Input:** vector of points

**Output:** vector of weights

**Usage/Example:**  

      std::cout << "\nget Coefficients for points (-1, 0, 1): \n";
      rhs = {-1, 0, 1};
      printVec(diffCoef(rhs,1));

Output from the lines above:  

      get Coefficients for points (-1, 0, 1):

      [ 2 -2 2 ]

**Implementation/Code:** The following is the code for diffCoef(const std::vector<double>& locations, int order) 

      std::vector<double> diffCoef(const std::vector<double>& locations, int order){
          std::vector<std::vector<double>> mat;
          for(int i =0; i < locations.size();i++){
              std::vector<double> temp;
              temp.reserve(locations.size());
              for(int j =0; j < locations.size();j++){
                  temp.push_back(pow(locations[j],i));
              }
              mat.push_back(temp);
          }
          std::vector<double> temp;
          for(int i =0; i < locations.size();i++){
              if(i == locations.size()-1){
                  temp.push_back(factorial(i));
              }else{
                  temp.push_back(0);
              }
          }
          //printMat(mat);
          //printVec(temp);
          return approxU(mat, temp);
      }
