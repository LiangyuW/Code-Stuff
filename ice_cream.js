function whatFlavors(cost, money) {
    
    var price = ""
    let hashT = {}
    let set = new Set()

    for(let i = 0; i< cost.length; i++) {
            hashT[cost[i]] = i
    }

    for(let i = 0; i< cost.length; i++) {
        set.add(i)
        var diff = money - cost[i]
        if(hashT[diff] && hashT[diff] !== i && !set.has(hashT[diff])) {
            set.add(hashT[diff])
            price = price + (i+1).toString()+" "+ (hashT[diff]+1).toString() +"\n"
        }
    }
    process.stdout.write(price)
}
