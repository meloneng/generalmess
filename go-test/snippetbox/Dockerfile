
FROM  golang:1.20-alpine

WORKDIR /app

COPY go.mod ./

RUN go mod download

COPY . .

EXPOSE 4000

CMD [ "go", "run", "./cmd/web" ]
