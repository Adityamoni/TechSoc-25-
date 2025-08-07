#include <iostream>
#include <string>
#include <cmath> //for a^b and sqrt - is not built-in in c++

double ln(double value) // algorithm developed to compute natural logs of higher order (overshot from -1<x<1)
{
        double result ; 
        double temp = 0;
        if (value < 2)
        {
            double a = value - 1 ;
             result = temp + (a - pow(a , 2)/2 + pow(a , 3)/3 - pow(a , 4)/4 + pow(a , 5)/5);
        }
        else
        {
            for ( ;value >= 2; value/= 2)
    {
        temp += 0.693 ; // ln(2)
    }  
        double a = value - 1;
        result = temp + (a - pow(a , 2)/2 + pow(a , 3)/3 - pow(a , 4)/4 + pow(a , 5)/5);
        }
        return result ;

}

double exp(double value)
{
    double result ;
    int chart = value; // characteristic
    double m = value - chart ; // mantissa
    return result = (std::pow(2.71828, chart)) * (1+m/1 + pow(m,2)/2+ pow(m,3)/6 + pow(m,4)/24 + pow(m,5)/120) ;
}

double sine(double v)
{
    double result;
    return result = v - pow(v,3)/6 + pow(v,5)/120 - pow (v,7)/5040 + pow(v,9)/362880 ;
}

double cosine (double v)
{
    double result;
    return result =  1 - 3*pow(v,2)/6 + 5*pow(v,4)/120 - 7*pow (v,6)/5040 + 9*pow(v,8)/362880; // differentiated sine series
}
double tangent (double v)
{
    double result;
    return result = v + pow(v,3)/3 + 2*pow(v,5)/15 + 17/315*pow(v,5) + 62/2835*pow(v,9);
}
double arcsine (double v)
{
    double result;
    return result = v + pow(v,3)/6 + 3*pow(v,5)/40 + 5*pow(v,7)/112 + 35*pow(v,9)/1152;
}
double arctangent (double v)
{
    double result;
    return result = v - pow(v,3)/3 + pow(v,5)/5 - pow(v,7)/7 + pow(v,9)/9 - pow(v,11)/11 + pow(v,13)/13 - pow(v,15)/15 + pow(v,17)/17;
}
double decimal_index (double a, double value)
{
    double result ;
    int chart = value*ln(a); // characteristic
    double m = value*ln(a) - chart ; // mantissa
    return result = (std::pow(2.71828, chart)) * (1+m/1 + pow(m,2)/2+ pow(m,3)/6 + pow(m,4)/24 + pow(m,5)/120) ;
}


int main()
{
    std::cout << "Addressing limitatons and precison of the machine \n This system uses algorithms combined with McLauren series to compute the request attested by the user. \n DMAS and power(indices) and square-roots(second radical) in standard calculator is accurate as it includes the direct firmware.\n Natural, common logaritm and exponent are algorithmized to provide accurate answers till second decimal places. \n Sines, Cosines and Tangents are made directly from mclauren series in which sines and cosines are accurate to two decimals while tangents are less. \n Arcs of sines cosines and tangents are least accurate from mclauren, as the series converges slowly near (for eg arcsine) 1 \n Lastly the decimal index is also accurate to two decimal places and uses logarithm and exponent algorithms and at times could give varying answers. \n THE USER IS ADVICED TO ROUND THE ANSWER OBTAINED TO THE SECOND DECIMAL PLACE \n" ;
    std::cout << "Greetings User\n ---INSTRUCTIONS--- \n For the usage of standard Calc functions please use the syntax <num1> <operator> <num2> \n Using Scientific functions, please enter the operation FIRST followed by the numerica.\n We appreciate your patience. Fly safe!" << std::endl ;
    std::cout << ("Please chose the mode of Calculation; enter 'std' for standard or 'scf' for scientific.") << std::endl ;
    std::string ch;
    std::getline(std::cin, ch);
    if  (ch == "std")
    {
        double a , b ; //numbers
        char o;     //operator
        std::cout << "Please enter in the proper syntax \n The operators supported are: \n + for addition \n - for substraction \n * for multipication \n / for division \n ^ for index/raise power(including decimal) \n s for second-radical or square-root.  Information: square root is denoted by 's', and enter the same number both sides" << std::endl ;
        std::cin >> a >> o >> b ;
        switch(o)
        {
         case '+':
         std::cout << a + b << std::endl ;
         break;
         case '-':
         std::cout << a - b << std::endl ;
         break;
         case '*':
         std::cout << a * b << std::endl ;
         break;
         case '/':
         std::cout << a / b << std::endl ;
         break;
         case '^':
         std::cout << pow(a,b) << std::endl ;
         break;
         case 's':
         std::cout << sqrt(a) << std::endl ;
         break;
         default:
         std::cout << "The syntax or the keyword is not recogniseds" ;
         break;
        }
         
    }
    else if (ch == "scf")
    {
        std::cout << "Specify the operator, and enter the number \n**Legend** \nln for natural log\nlg for common log\nexp for exponent \nsn for sine \ncs for cosine\ntn for tangent \nasn for arcsine \nacs for arccosine \natn for arctangent\ndci for decimal index NOTE: Please enter base first and then the index. \n Specify the operator:";
        std::string o ;
        double n ;
        std::cin >>  o ;
        std::cout << " Enter value numerica:" ;
        std::cin >> n ;
        if (o == "ln")
        {
            std::cout << ln(n);
        }
        else if (o == "lg")
        {
            std::cout << (ln(n))/2.303;
        }
        else if (o == "exp")
        {
            std::cout << exp(n) ;
        }
        else if (o == "sn")
        {
            std::cout << sine(n);
        }
        else if  (o == "cs")
        {
            std::cout<< cosine(n) ;
        }
        else if (o == "tn")
        {
            std::cout<< tangent(n);
        }
        else if (o == "asn")
        {
             std::cout<< arcsine(n);
        }
        else if (o == "acs")
        {
             std::cout<< 1.570796/*pi/2*/ - arcsine(n) ;
        }
        else if (o == "atn")
        {
             std::cout<< arctangent(n) ;
        }
        else if (o == "dci")
        {
            double y ;
            std::cout<< "Enter Index" << std::endl ;
            std::cin >> y ;
            std::cout<< decimal_index(n,y);
        }
        else
        {
             std::cout<< "Error: The keyword entered is not recognised" <<std::endl ;
        }
    }
    else 
    {
         std::cout<< "Error: The keyword entered is invalid" ;
    }
     std::cout<< " \nThank you!";
    return 0;
}