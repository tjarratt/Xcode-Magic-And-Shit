import Foundation

struct MySpecialStruct {
    let name : String
    var age : Int
}

func ==(a: MySpecialStruct, b: MySpecialStruct) -> Bool {
    return a.name == b.name &&
           a.age == b.age
}