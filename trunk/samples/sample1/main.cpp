#include <EZB.h>

int main(int argc, char **argv){

	EZB* ezsdk = new EZB();

	try{
		ezsdk->Connect("00:12:02:15:70:65");

		char buff[255];
		strcpy(buff, "-");

		printf("EZ-Robot Demo 1\n");
		printf("Firmware Version: %s\n", ezsdk->GetFirmwareVersion());
		printf("Options:\n\t1. Forward\n\t2. Back\n\t3. Stop\n\tEmpty string to exit\n");

		while(strcmp(buff, "") != 0){
			gets(buff);
			if(strcmp(buff, "1") == 0){
				ezsdk->Servo->SetServoPosition(ServoClass::D0, ServoClass::SERVO_MAX);
			}else if(strcmp(buff, "2") == 0){
				ezsdk->Servo->SetServoPosition(ServoClass::D0, ServoClass::SERVO_MIN);
			}else if(strcmp(buff, "3") == 0){
				ezsdk->Servo->ReleaseServo(ServoClass::D0);
			}else if(strcmp(buff, "4") == 0){
				printf("%s", ezsdk->Digital->GetDigitalPort(DigitalClass::D0)?"on\n":"off\n");
			}else if(strcmp(buff, "5") == 0){
				ezsdk->Digital->SetDigitalPort(DigitalClass::D1, true);
				printf("%s", ezsdk->Digital->GetDigitalPort(DigitalClass::D1)?"on\n":"off\n");
			}else if(strcmp(buff, "6") == 0){
				printf("%d", ezsdk->ADC->GetADCValue(ADCClass::ADC0));
			}else if(strcmp(buff, "7") == 0){
				printf("%f", ezsdk->ADC->GetADCVoltage(ADCClass::ADC0));
			}else if(strcmp(buff, "8") == 0){
				ezsdk->SetLEDStatus(false);
			}else if(strcmp(buff, "9") == 0){
				ezsdk->SetLEDStatus(true);
			}

		}
	}
	catch(std::exception &e){
		printf("ERROR: %s\n", e.what());
	}
	printf("Exiting\n");
	delete ezsdk;

}
