#include <Conceptinetics.h>

#define DMX_SLAVE_CHANNELS   10 
#define RXEN_PIN                2

DMX_Slave dmx_slave (DMX_SLAVE_CHANNELS , RXEN_PIN);

const int ledPin = 13;

int[3] colourLeft = {0, 0, 0};
int[3] colourRight = {0, 0, 0};

// the setup routine runs once when you press reset:
void setup() {             
  
  // Enable DMX slave interface and start recording
  // DMX data
  dmx_slave.enable ();  
  
  // Set start address to 1, this is also the default setting
  // You can change this address at any time during the program
  dmx_slave.setStartAddress (1);
  
  // Set led pin as output pin
  pinMode ( ledPin, OUTPUT );
}

// the loop routine runs over and over again forever:
void loop() 
{

  
  
  if ( dmx_slave.getChannelValue (1) > 127 )

    
  
}
