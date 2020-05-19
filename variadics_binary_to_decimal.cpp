
template<bool val>
int reversed_binary_value(){
return val;
}
template<bool val1, bool val2, bool... valn>
int reversed_binary_value(){
    return ((reversed_binary_value<val2, valn...>() << 1) + val1);
}

