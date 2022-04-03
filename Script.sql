CREATE TABLE grado (
	grado_id BIGINT auto_increment NOT NULL,
	grado_nombre varchar(100) NOT NULL,
	CONSTRAINT grado_pk PRIMARY KEY (grado_id)
);


CREATE TABLE alumno (
	alumno_id BIGINT auto_increment NOT NULL,
	nombre_completo varchar(250) NOT NULL,
	correo varchar(100) NOT NULL,
	carne varchar(30) NOT NULL,
	fecha_nacimiento DATE,
	CONSTRAINT alumno_pk PRIMARY KEY (alumno_id)
);


CREATE TABLE maestro (
	maestro_id BIGINT auto_increment NOT NULL,
	maestro_nombre varchar(250) NOT NULL,
	correo varchar(100) NOT NULL,
	fecha_nacimiento DATE,
	CONSTRAINT meastro_pk PRIMARY KEY (maestro_id)
);

create table asignacion(
	asignacion_id BIGINT auto_increment not null,
	alumno_id BIGINT not null,
	grado_id BIGINT not null,
	CONSTRAINT asignacion_pk PRIMARY KEY (asignacion_id)
);

ALTER TABLE asignacion 
ADD CONSTRAINT asignacion_alumno 
FOREIGN KEY (alumno_id) REFERENCES alumno(alumno_id);

ALTER TABLE asignacion 
ADD CONSTRAINT asignacion_grado 
FOREIGN KEY (grado_id) REFERENCES grado(grado_id);
