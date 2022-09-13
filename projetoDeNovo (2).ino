#include <Key.h>
#include <Keypad.h>


const char string_0[] PROGMEM = "#B41#";
const char string_1[] PROGMEM = "0#097";
const char string_2[] PROGMEM = "03D#6";
const char string_3[] PROGMEM = "06316";
const char string_4[] PROGMEM = "07A10";
const char string_5[] PROGMEM = "14#C2";
const char string_6[] PROGMEM = "142A4";
const char string_7[] PROGMEM = "21047";
const char string_8[] PROGMEM = "21C7D";
const char string_9[] PROGMEM = "23D39";
const char string_10[] PROGMEM = "26411";
const char string_11[] PROGMEM = "27317";
const char string_12[] PROGMEM = "2CD12";
const char string_13[] PROGMEM = "3#C42";
const char string_14[] PROGMEM = "318D0";
const char string_15[] PROGMEM = "32A19";
const char string_16[] PROGMEM = "3A0CD";
const char string_17[] PROGMEM = "3A7B1";
const char string_18[] PROGMEM = "3BB74";
const char string_19[] PROGMEM = "3DB47";
const char string_20[] PROGMEM = "44#00";
const char string_21[] PROGMEM = "4642A";
const char string_22[] PROGMEM = "46C81";
const char string_23[] PROGMEM = "48CC9";
const char string_24[] PROGMEM = "4B3#0";
const char string_25[] PROGMEM = "50#46";
const char string_26[] PROGMEM = "59945";
const char string_27[] PROGMEM = "5AD3#";
const char string_28[] PROGMEM = "5B193";
const char string_29[] PROGMEM = "6##BB";
const char string_30[] PROGMEM = "60555";
const char string_31[] PROGMEM = "6179#";
const char string_32[] PROGMEM = "62A23";
const char string_33[] PROGMEM = "65528";
const char string_34[] PROGMEM = "6BC#B";
const char string_35[] PROGMEM = "71D88";
const char string_36[] PROGMEM = "742C5";
const char string_37[] PROGMEM = "76659";
const char string_38[] PROGMEM = "7DD83";
const char string_39[] PROGMEM = "8A01C";
const char string_40[] PROGMEM = "8ADD0";
const char string_41[] PROGMEM = "8C08B";
const char string_42[] PROGMEM = "8D573";
const char string_43[] PROGMEM = "90#C4";
const char string_44[] PROGMEM = "92432";
const char string_45[] PROGMEM = "99859";
const char string_46[] PROGMEM = "A#2#C";
const char string_47[] PROGMEM = "A9C4D";
const char string_48[] PROGMEM = "B#88B";
const char string_49[] PROGMEM = "B#B82";
const char string_50[] PROGMEM = "B018D";
const char string_51[] PROGMEM = "B20#3";
const char string_52[] PROGMEM = "B2B89";
const char string_53[] PROGMEM = "B5B44";
const char string_54[] PROGMEM = "B7223";
const char string_55[] PROGMEM = "B9572";
const char string_56[] PROGMEM = "BCA0B";
const char string_57[] PROGMEM = "C031A";
const char string_58[] PROGMEM = "C97B8";
const char string_59[] PROGMEM = "D#C07";
const char string_60[] PROGMEM = "D334A";
const char string_61[] PROGMEM = "D3A2C";
const char string_62[] PROGMEM = "DA89C";
const char string_63[] PROGMEM = "DD#34";
const char *const User[] PROGMEM = {string_0,string_1,string_2,string_3,string_4,string_5,string_6,string_7,string_8,string_9,string_10,string_11,string_12,string_13,string_14,string_15,string_16,string_17,string_18,string_19,string_20,string_21,string_22,string_23,string_24,string_25,string_26,string_27,string_28,string_29,string_30,string_31,string_32,string_33,string_34,string_35,string_36,string_37,string_38,string_39,string_40,string_41,string_42,string_43,string_44,string_45,string_46,string_47,string_48,string_49,string_50,string_51,string_52,string_53,string_54,string_55,string_56,string_57,string_58,string_59,string_60,string_61,string_62,string_63};


const char senha_0[] PROGMEM = "##AD0";
const char senha_1[] PROGMEM = "#05BB";
const char senha_2[] PROGMEM = "#1C9D";
const char senha_3[] PROGMEM = "#3749";
const char senha_4[] PROGMEM = "#3A0C";
const char senha_5[] PROGMEM = "#5B67";
const char senha_6[] PROGMEM = "#6A49";
const char senha_7[] PROGMEM = "#9274";
const char senha_8[] PROGMEM = "#ADCD";
const char senha_9[] PROGMEM = "021A4";
const char senha_10[] PROGMEM = "026C#";
const char senha_11[] PROGMEM = "09C07";
const char senha_12[] PROGMEM = "0A5#3";
const char senha_13[] PROGMEM = "13A41";
const char senha_14[] PROGMEM = "2D5B#";
const char senha_15[] PROGMEM = "36AA9";
const char senha_16[] PROGMEM = "381AC";
const char senha_17[] PROGMEM = "38440";
const char senha_18[] PROGMEM = "3916C";
const char senha_19[] PROGMEM = "4926#";
const char senha_20[] PROGMEM = "4970A";
const char senha_21[] PROGMEM = "4D3A3";
const char senha_22[] PROGMEM = "503CB";
const char senha_23[] PROGMEM = "504B#";
const char senha_24[] PROGMEM = "5902A";
const char senha_25[] PROGMEM = "69168";
const char senha_26[] PROGMEM = "6A528";
const char senha_27[] PROGMEM = "6AB7B";
const char senha_28[] PROGMEM = "71B78";
const char senha_29[] PROGMEM = "73DAC";
const char senha_30[] PROGMEM = "75AA1";
const char senha_31[] PROGMEM = "75B65";
const char senha_32[] PROGMEM = "7D31#";
const char senha_33[] PROGMEM = "8#924";
const char senha_34[] PROGMEM = "80CC2";
const char senha_35[] PROGMEM = "8451#";
const char senha_36[] PROGMEM = "84D81";
const char senha_37[] PROGMEM = "858A2";
const char senha_38[] PROGMEM = "8998A";
const char senha_39[] PROGMEM = "93B51";
const char senha_40[] PROGMEM = "97B5C";
const char senha_41[] PROGMEM = "9A1#9";
const char senha_42[] PROGMEM = "9A255";
const char senha_43[] PROGMEM = "9BD36";
const char senha_44[] PROGMEM = "9D#95";
const char senha_45[] PROGMEM = "A02B1";
const char senha_46[] PROGMEM = "A22DD";
const char senha_47[] PROGMEM = "A55C1";
const char senha_48[] PROGMEM = "A6C3C";
const char senha_49[] PROGMEM = "A735A";
const char senha_50[] PROGMEM = "A7684";
const char senha_51[] PROGMEM = "AC1#7";
const char senha_52[] PROGMEM = "AC1C6";
const char senha_53[] PROGMEM = "B247B";
const char senha_54[] PROGMEM = "C0832";
const char senha_55[] PROGMEM = "C2953";
const char senha_56[] PROGMEM = "C5B#7";
const char senha_57[] PROGMEM = "CA004";
const char senha_58[] PROGMEM = "CC#4C";
const char senha_59[] PROGMEM = "D##16";
const char senha_60[] PROGMEM = "D#136";
const char senha_61[] PROGMEM = "D2169";
const char senha_62[] PROGMEM = "D3201";
const char senha_63[] PROGMEM = "D6B5#";
const char *const Senhas[] PROGMEM = {senha_0,senha_1,senha_2,senha_3,senha_4,senha_5,senha_6,senha_7,senha_8,senha_9,senha_10,senha_11,senha_12,senha_13,senha_14,senha_15,senha_16,senha_17,senha_18,senha_19,senha_20,senha_21,senha_22,senha_23,senha_24,senha_25,senha_26,senha_27,senha_28,senha_29,senha_30,senha_31,senha_32,senha_33,senha_34,senha_35,senha_36,senha_37,senha_38,senha_39,senha_40,senha_41,senha_42,senha_43,senha_44,senha_45,senha_46,senha_47,senha_48,senha_49,senha_50,senha_51,senha_52,senha_53,senha_54,senha_55,senha_56,senha_57,senha_58,senha_59,senha_60,senha_61,senha_62,senha_63};

byte Colum[4] = {9,8,7,6};
byte Linha[4] = {5,4,3,2};
char Teclado[4][4] = {  {'1','2','3','A'},
                        {'4','5','6','B'},
                        {'7','8','9','C'},
                        {'*','0','#','D'},
}; 

Keypad KeyPad = Keypad(makeKeymap(Teclado),Colum,Linha,4,4);



void setup(){
  Serial.begin(9600);
  delay(2000);
  }
String InserirNoTeclado(String Componente, int Tam){
  String Conteudo = "";
  int erro;
  while(Conteudo.length()!=Tam){
    char chave = KeyPad.waitForKey();
    if(chave=='*'){
      if(Conteudo.length()!=0){
        Conteudo.remove(Conteudo.length()-1);
        Serial.print(Componente + "=" + "\""+Conteudo + "\"" );
        Serial.write(0xff);
        Serial.write(0xff);
        Serial.write(0xff);
       }
       
    }else{
    Conteudo.concat(chave);
    Serial.print(Componente + "=" + "\""+Conteudo + "\"" );
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);}
    
    
  }
  
  return Conteudo; 
}

void ChangePage(int n){
    Serial.print("page " + String(n));
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);
  }


char buffer[10];

bool verificao(int ID,String Ra,String Sa){
    if(ID!=-1){
      if( pegarRA(ID).equals(Ra) && pegarSenha(ID).equals(Sa) ){
        return true;
      }
  }
  return false;
}


String pegarRA(int idx){
  strcpy_P(buffer, (char *)pgm_read_word(&(User[idx]))); // Casts e desreferência necessários, apenas copie.
  return buffer;
}

String pegarSenha(int idx){
  strcpy_P(buffer, (char *)pgm_read_word(&(Senhas[idx]))); // Casts e desreferência necessários, apenas copie.
  return buffer;
}


int BuscaBinaria(String RA){
  int comeco = 0;
  int fim = 64;
  int meio;
  String aux;
  int ID;

  while(comeco !=fim-1){
      meio = comeco + ((fim - comeco)/2);
      delay(70);
      String x = pegarRA(meio);
      delay(70);
      ID = RA.compareTo(x);
      delay(70);
      if(ID == 0){
      return meio;
      }

      if(ID < 0){
        fim = meio;
      }else{
        comeco = meio; 
       }
  }
  return -1;
}

char pedido(){
  for(;;){
     ChangePage(3);
     char P = KeyPad.waitForKey();
     if(P!='D'){
       String Palavra = "\"Comfirmar Combo "+String(P)+"\"";
    
       ChangePage(4);
       Serial.print("page4.t0.txt="+Palavra);
          Serial.write(0xff);
        Serial.write(0xff);
        Serial.write(0xff);
      char N = KeyPad.waitForKey();
      if(N=='A'){
        return P;
      }
     
     }else{
     return 'x';
     }
  }
}



void aguarde(){
  int c;
   while(1){
      if(Serial.available()){
        c = int(Serial.read());
        if(c==48){
          break;}
        }
      }
  
  }

//comfirmar usuario e senha
void loop() {
    String RA;
    String SA;
    
    RA =  InserirNoTeclado("page1.t0.txt",5);
    aguarde();
    ChangePage(2);
    SA =  InserirNoTeclado("page2.t0.txt",5);
    aguarde();
    int ID = BuscaBinaria(RA);
    delay(500);
    if(verificao(ID,RA,SA)){
      
    }
    ChangePage(0);
     delay(500);
   
}
