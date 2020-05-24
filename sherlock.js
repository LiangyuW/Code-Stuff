

function isValid(s) {
    let ary = s.split("")
    let map = {}
    for(let i = 0; i < ary.length; i++){
        if(map[ary[i]]){
            map[ary[i]]++
        } else{
            map[ary[i]] = 1
        }
    }
    let keys = Object.keys(map)
    let values = []
    for(let i = 0; i< keys.length; i++){
    values.push(map[keys[i]])
    }
    
    let map2 = {}
    let mapsize = 0
    for(let i = 0; i< values.length; i++){
        if(map2[values[i]]){
            map2[values[i]]++
        } else {
            map2[values[i]] = 1
            mapsize++
        }
    }

    let hasone = -1
    let moreone = -1
    
    if(mapsize == 1){
        return "YES"
    }
    
    if(mapsize > 2){
        return "NO"
    }
    let keys2 = Object.keys(map2)
    if(map2[keys2[0]] == 1 && map2[keys2[1]] == 1) {
        hasone = 0
        moreone = 1
    } else {
    for(let i = 0; i< keys2.length; i++){
        if(map2[keys2[i]] == 1){
            hasone = i
        } else {
            moreone = i
        }
    }
    }

    let dominant = -1
    let minority = -1
    if(map2[keys2[moreone]] >= map2[keys2[hasone]]){
        dominant = moreone
        minority = hasone
    } else { 
        dominant = hasone
        minority = moreone
    }

    if(hasone == -1){
        return "NO"
    }

    if(keys2[hasone]-keys2[moreone] > 1) {
        return "NO"
    }
    
    if(keys2[dominant]>keys2[minority]+1 && 
        map2[keys2[dominant]] == map2[keys2[minority]]){
        return "NO"
    }
    
    if(keys2[dominant]>keys2[minority] && keys2[minority] > 1){
        if(map2[keys2[dominant]] != map2[keys2[minority]]){
            return "NO"
        }

    }
   
    return "YES"
    }
    


console.log(isValid("abbac"))
console.log(isValid("aaabbbcccdd"))
console.log(isValid("abcdefghhgfedecba"))
console.log(isValid("aaabbbcc"))
console.log(isValid("aaaaaaffffffg"))
console.log(isValid("aabbbcccddd"))
console.log(isValid("aaaabbcc"))
console.log(isValid("abccc"))
console.log(isValid("bbaaaccc"))
console.log(isValid("bbaaaacc"))
console.log(isValid("aaaabb"))

