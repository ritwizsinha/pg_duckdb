create table t(a int, b numeric(8, 3));
insert into t values (5, NULL);
select b from t where a > 3;
drop table t;