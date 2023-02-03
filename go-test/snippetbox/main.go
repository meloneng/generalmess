package main

import (
	"log"
	"net/http"
)

func home(w http.ResponseWriter, r *http.Request) {
	if(r.URL.Path != "/"){
		http.NotFound(w,r)
		return
	}
	w.Write([]byte("hello from Snippetbox"))
}

func snippetView(w http.ResponseWriter, r *http.Request){
	w.Write([]byte("view"))
}

func snippetCreate(w http.ResponseWriter, r *http.Request){
	if(r.Method != "POST"){
		w.Header().Set("Allow", http.MethodPost)
		//w.WriteHeader(405)
		//w.Write([]byte("Method not allowed"))
		http.Error(w, "Method not allowed", http.StatusMethodNotAllowed)
		return
	}
	w.Write([]byte("Create"))
}

func testOne(w http.ResponseWriter, r *http.Request){
	w.Write([]byte("test"))
}


func main(){
	mux := http.NewServeMux()
	mux.HandleFunc("/", home)
	mux.HandleFunc("/snippet/view", snippetView)
	mux.HandleFunc("/snippet/create", snippetCreate)
	mux.HandleFunc("/test/one/", testOne)

	log.Println("Starting server on :9006")
	err := http.ListenAndServe(":9006", mux)
	log.Fatal(err)
}

