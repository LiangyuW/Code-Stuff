


function processData(input) {
    var data = input.split('\n')
    var num = parseInt(data[0])
    let k = 1

    while(k < 2*num) {
    var secret = data[k].split("")
    var key = []
    let set = new Set()
    const alphabet = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    let cipalphabet = []

    for (let i = 0; i< secret.length; i++) {
        if(set.has(secret[i])){
        } else
        {
            set.add(secret[i])
            key.push(secret[i])
        }
    }
    for(let i = 0; i< alphabet.length; i++) {
        if(!set.has(alphabet[i])) {
            cipalphabet.push(alphabet[i])
        }
    }

    var msg = data[k+1].split(" ").join("").split("")
    var map = new Map()
    

    for(i = 0; i < key.length; i++) {
        let j = i
        let column = []
        while (j < cipalphabet.length) {   
            column.push(cipalphabet[j])
            j = j+key.length
        }
        map.set(key[i], column)
    }

    var substitution = []
    for(let i = 0; i<alphabet.length; i++){
        if(map.has(alphabet[i])){
           var sub = [...alphabet[i],  ...map.get(alphabet[i])]
           substitution = [...substitution, ...sub]
        }
    }

    let map2 = new Map()
    for(let i = 0; i < alphabet.length; i++) {
        map2.set(substitution[i], alphabet[i])
    }

    var text = ""
    let j = 1
    for(let i = 0; i < msg.length; i++) {
        text = text.concat(map2.get(msg[i]))
        if(j===5) {
            text = text.concat(" ")
            j=0
        } 
        j++
    }

    console.log(text)
    k=k+2
    }
} 


processData("2\nSPORT\nLDXTW KXDTL NBSFX BFOII LNBHG ODDWN BWK\nSECRET\nJHQSU XFXBQ")



