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
for(let i = 0; i< keys2.length; i++){
    if(map2[keys2[i]] == 1){
        hasone = i
    } else {
        moreone = i
    }
}

if(hasone == -1){
    return "NO"
}

if(keys2[hasone]-keys2[moreone] > 1) {
    return "NO"
}


return "YES"

}
