# include <iostream.h>
main ( )
{
    char grade ;
    cout << "Please enter the student's grade : ";
    cin >> grade ;
    switch ( grade )
    {
        case 'A' :      
        case 'a' :     
            cout << "Excellent" ;
            break ;     
        case 'B' :      
        case 'b' :     
            cout << "Very Good" ;
            break ; 
        case 'C' :      
        case 'c' :      
            cout << "Good" ;
            break ; 
        case 'D' :     
        case 'd' :      
            cout << "Poor" ;
            break ; 
        case 'F' :      
        case 'f' :     
            cout << "Fail" ;
            break ; 
        default :
            cout << "Please enter grade from A to D or F " ;
    }
}
