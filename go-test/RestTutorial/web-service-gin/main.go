package main

import (
    "fmt"
    "net/http"
    
    "github.com/gorilla/mux"
)


type album struct{
	ID     string  `json:"id"`
    Title  string  `json:"title"`
    Artist string  `json:"artist"`
    Price  float64 `json:"price"`
}


// albums slice to seed record album data.
var albums = []album{
    {ID: "1", Title: "Blue Train", Artist: "John Coltrane", Price: 56.99},
    {ID: "2", Title: "Jeru", Artist: "Gerry Mulligan", Price: 17.99},
    {ID: "3", Title: "Sarah Vaughan and Clifford Brown", Artist: "Sarah Vaughan", Price: 39.99},
}


func HandleHello(w http.ResponseWriter, rq *http.Request){
    fmt.Fprintf(w, "dd8gn\n")
}


func main(){

    muxx := mux.NewRouter()
    muxx.HandleFunc("/", HandleHello)

    http.ListenAndServe(":8080", muxx)
}
