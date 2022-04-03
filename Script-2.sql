insert into grado (grado_nombre) values ('Sexto');

select * from grado;

update grado set grado_nombre = 'Quinto' where grado_id = 5;

delete from grado where grado_id = 1;

ALTER TABLE grado AUTO_INCREMENT = 1;

select * from alumno;

insert into alumno(nombre_completo, correo, carne, fecha_nacimiento) 
values ('Juan Jose', 'jjose@miumg.edu.gt', '1990-21-467', '1999-12-25');


update alumno set correo = 'mteo@miumg.edu.gt', carne = '1990-21-3657' 
where alumno_id = 2;

select * from asignacion;

insert into asignacion (alumno_id, grado_id)
values (3, 2);

select grado.grado_nombre, alumno.nombre_completo, alumno.carne 
from asignacion  
inner join alumno ON asignacion.alumno_id = alumno.alumno_id
inner join grado ON asignacion.grado_id = grado.grado_id;

/*
 * laboratorio
 * relacione las tablas grado y maestro
 * haga una consulta mostrando el grado que le corresponde a cada maestro
 */
