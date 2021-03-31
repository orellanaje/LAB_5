//JOSE ORELLANA 18832
//LAB#5


#include <SPI.h>
#include <SD.h>

char get;

File Mio;
File root;
//---------------------------------------
void setup() {

SPI.setModule(0);
Serial.begin(9600);
while (!Serial){
  ;
 }

Serial.print("Iniciando SD");
pinMode(10,OUTPUT);

if (!SD.begin(4)){
  Serial.println("Inicio fallo!");
  return;
  }
  Serial.println("Inicio DONE");


  root = SD.open("//");
  Directorio(root, 0);

  Serial.println("Elija una opcion");
  Serial.println("1) para imagen 1");
  Serial.println("2) para imagen 2");
  Serial.println("3) para imagen 3");
  Serial.println("4) para imagen 4");
  Serial.println("5) Mostrar todo lo qu esta en la SD");
  //----------------------------------------------------------



  
void Directorio(File dir, int numTabas) {
  while (true){

    File entry = dir.openNextFile();
    if (!entry) {
      break;
    }
    for (uint8_t i = 0; i < numTabs; i++ {
      Serial.print('\t');
    }
    Serial.print(entry.name());
    if (entry.isDirectory()) {
      Serial.println("/");
      Directorio(entry, numTabs + 1);
    } else{
      Serial.print("\t\t");
      Serial.print(entry.size(), DEC);
    }
    entry.close();
  }
}
    }
  }
  if
}
 
 //-------------------------------------------------------------- 
}


void loop(){

get = Serial.read();
char a = (get, DEC);
switch (get) {
  case '1':
  mio = SD.open(" Imagen1.txt");
  if (mio) {
    while (mio.available()){
      Serial.write(mio.read());}

      mio.close();
  }else{
    Serial.println("error al abrir el ,txt")l;
  }

  Serial.print("Ingrese un numero para seleccionar")
  Serial.print("1) para imagen 1");
  Serial.print("2) para imagen 2");
  Serial.print("3) para imagen 3");
  Serial.print("4) para imagen 4");
  Serial.print("5) para miostrar los datos de la SD");
  break;

  case '2':
  Mio = SD.open(" Imagen2.txt");
  if (Mio) {
    while (mio.available()){
      Serial.write(mio.read());}

      Mio.close();
  }else{
    Serial.println("error al abrir el ,txt")l;
  }

  Serial.print("Ingrese un numero para seleccionar")
  Serial.print("1) para imagen 1");
  Serial.print("2) para imagen 2");
  Serial.print("3) para imagen 3");
  Serial.print("4) para imagen 4");
  Serial.print("5) para miostrar los datos de la SD");
  break;

  case '3':

  Mio = SD.open(" Imagen3.txt");
  if (Mio) {
    while (mio.available()){
      Serial.write(mio.read());}

      Mio.close();
  }else{
    Serial.println("error al abrir el ,txt")l;
  }

  Serial.print("Ingrese un numero para seleccionar")
  Serial.print("1) para imagen 1");
  Serial.print("2) para imagen 2");
  Serial.print("3) para imagen 3");
  Serial.print("4) para imagen 4");
  Serial.print("5) para miostrar los datos de la SD");
  break;


 case '4':
 Mio = SD.open(" Imagen4.txt");
  if (Mio) {
    while (Mio.available()){
      Serial.write(mio.read());}

      Mio.close();
  }else{
    Serial.println("error al abrir el ,txt")l;
  }

  Serial.print("Ingrese un numero para seleccionar")
  Serial.print("1) para imagen 1");
  Serial.print("2) para imagen 2");
  Serial.print("3) para imagen 3");
  Serial.print("4) para imagen 4");
  Serial.print("5) para miostrar los datos de la SD");
  break;

  case '5':
  root = SD.open("/");
  Directorio(root,0);
  
