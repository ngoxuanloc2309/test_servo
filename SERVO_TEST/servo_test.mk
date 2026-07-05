APP_FILES = ${SERVO_TEST_DIR}/app/app.c \
			
COMPONENT_FILES = ${SERVO_TEST_DIR}/components/angle_control/angle_control.c \
				  ${SERVO_TEST_DIR}/components/bsp/bsp.c \

SERVO_SOURCES  = 	$(APP_FILES) \
				   	$(COMPONENT_FILES)
