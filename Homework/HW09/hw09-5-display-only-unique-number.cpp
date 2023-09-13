/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/

#include <stdio.h>

int main() {
    
    int n ;
    int temp = 0 ;
    printf ( "Input N :\n" ) ;
    scanf ( "%d", &n ) ;
    int array[ n ] ;

    // รับค่า ตามจำนวน n
    for ( int i = 0 ; i < n ; i++ ) {
        printf ( "Input :\n" ) ;
        scanf ( "%d", &array[ i ]  ) ;
    } // end for

    // เรียงค่าจากเลขน้อยไปหามาก
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int k = i + 1 ; k < n ; k++ ) {
            if ( array[ i ] > array[ k ] ) {
                temp = array[ i ] ;
                array[ i ] = array[ k ] ;
                array[ k ] = temp ;
            } // end if
        } // end for
    } // end for
    
    // แสดงค่า
    printf ( "Unique value :" ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        // ให้เลขเปรียบเทียบกับทางซ้ายและขวา ถ้าไม่ตรงกันก็ให้แสดง
        if ( array[ i ] != array[ i - 1 ] && array[ i ] != array[ i + 1 ] ) {
            printf ( " %d", array[ i ] ) ;
        } // end if
    } // end for
    
    return 0 ;
} // end main