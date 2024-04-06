/*
 * Project photon-iot-hello-world
 * Author: Cristiano Brudna
 * Date: 2024-04-06
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

#include <Particle.h>

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

void setup()
{
    Serial.begin(115200);
    while(!Serial)
    {
        delay(10ms);
    }

    Log.info("Hello World");
}

void loop()
{
    // Example: Publish event to cloud every 10 seconds. Uncomment the next 3 lines to try it!
    // Log.info("Sending Hello World to the cloud!");
    // Particle.publish("Hello world!");
    // delay( 10 * 1000 ); // milliseconds and blocking - see docs for more info!
}
