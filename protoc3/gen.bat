protoc -I=. --python_out=gen_python *.proto

protoc -I=. --java_out=gen_java *.proto
protoc -I=. --javanano_out=gen_javanano *.proto
protoc -I=. --objc_out=gen_objc *.proto
