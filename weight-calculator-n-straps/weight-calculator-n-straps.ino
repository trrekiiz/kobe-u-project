const int fsrPin = 0;  
const int fsrPin1 = 1;
int fsrReading;   
int fsrReading1;

void setup(void) {
    Serial.begin(9600);   
}
void loop(void) {
    fsrReading = analogRead(fsrPin);
    Serial.print("Left Straps = ");
    Serial.print(fsrReading);
    if (fsrReading < 10) {
      Serial.println(" - No pressure");
    } 
    else if (fsrReading < 200) {
      Serial.println(" - Light weight");
    } 
    else if (fsrReading < 500) {
      Serial.println(" - Light squeeze weight");
    } 
    else if (fsrReading < 800) {
      Serial.println(" - Medium squeeze weight");
    } 
    else {
      Serial.println(" - Big squeeze weight");
    }
    
    fsrReading1 = analogRead(fsrPin1);
    Serial.print("Right Straps = ");
    Serial.print(fsrReading1);
    if (fsrReading1 < 10) {
      Serial.println(" - No pressure");
    } 
    else if (fsrReading1 < 200) {
      Serial.println(" - Light weight");
    } 
    else if (fsrReading1 < 500) {
      Serial.println(" - Light squeeze weight");
    } 
    else if (fsrReading1 < 800) {
      Serial.println(" - Medium squeeze weight");
    } 
    else {
      Serial.println(" - Big squeeze weight");
    }

    if(fsrReading < 10 && fsrReading1 < 10){
       Serial.println("Nothing");
      }
    if(fsrReading < 10 && fsrReading1 > 10){
       Serial.println("Left straps dont use");
      }  
    if(fsrReading > 10 && fsrReading1 < 10){
       Serial.println("Right straps dont use");
      }  
    delay(2000);
} 


