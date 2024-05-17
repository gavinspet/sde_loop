

/*
1. static cast does implicit type conversion
2. still static cast is used so that it can be find easily where type  conversion has been done
3. static cast happens during compile time
*/


// variants
// string view
// is_same
// tyep_traits
//  std::visit



// in static cast: *char to *int is okay but not the opposite, it is restrictive 


int main()
{
    // this wont give error
    // float a =  9.0;
    // int c = static_cast<int>(a);

    char c;
    int *p = (int*)&c; // allowed should be error instead
    *p = 5;

    // int *q = static_cast<int*>(&c); not allowed
}