# min_mkn-mod

**Minimal Dynimically loaded maiken module ** 

## Prerequisites
  [maiken](https://github.com/Dekken/maiken)
  

## Usage
  
  Windows cl:

    mkn clean build -tSa -EHsc -dp test
  	mkn clean build -tSa -EHsc 
  	mkn run -p test


  Linux gcc:

    mkn clean build -tSa "-O2 -fPIC" -dp test -l "-pthread -ldl"
    mkn clean build -tSa "-O2 -fPIC" -l "-pthread -ldl"
    mkn run -p test
    
