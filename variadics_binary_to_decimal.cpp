
template<bool val>
int reversed_binary_value(){
return val;
}

// x << 1 = x*2

template<bool val1, bool val2, bool... valn>
int reversed_binary_value(){
    return ((reversed_binary_value<val2, valn...>() << 1) + val1);
}

